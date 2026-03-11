import tokenize
import io
import sys

"""
This is actually crazy y'all
I could literally tokenize and then translate azerbaijani language python to python code
"""

AZ_MAP = {
    'əgər': 'if',
    'yoxsa': 'else',
    'digər': 'elif',
    'üçün': 'for',
    'daxilində': 'in',
    'dövriyyə': 'while',
    'funksiya': 'def',
    'qayıt': 'return',
    'sinif': 'class',
    'keç': 'pass',
    'dayan': 'break',
    'davam_et': 'continue',
    'və': 'and',
    'və_ya': 'or',
    'deyil': 'not',
    'doğru': 'True',
    'yalan': 'False',
    'boş': 'None',
    'gətir': 'import',
    'olaraq': 'as',
    'yoxla': 'try',
    'təqdirdə': 'except',

    'çap': 'print',
    'soruş': 'input',
    'say': 'len',
    'siyahı': 'list',
    'rəqəm': 'int',
    'mətn': 'str',
    'məntiqi': 'bool',
    'aç': 'open',
    'diapazon': 'range',
    'yuvarlaq': 'round'
}

def translate_azpy(source_code):
    result = []
    tokens = tokenize.generate_tokens(io.StringIO(source_code).readline)
    
    for toknum, tokval, _, _, _ in tokens:
        if toknum == tokenize.NAME and tokval in AZ_MAP:
            result.append((toknum, AZ_MAP[tokval]))
        else:
            result.append((toknum, tokval))
            
    return tokenize.untokenize(result)

def run():
    if len(sys.argv) < 2:
        print("İstifadə: python azpy.py fayl.azpy")
        return

    try:
        with open(sys.argv[1], 'r', encoding='utf-8') as f:
            raw_code = f.read()
            
        python_code = translate_azpy(raw_code)
        
        exec(python_code, {'__name__': '__main__'})
        
    except Exception as e:
        print(f"Sistem Xətası: {e}")

if __name__ == "__main__":
    run()