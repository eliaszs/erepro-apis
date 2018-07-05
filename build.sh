make PROTOINCLUDE=$GOPATH/src/github.com/googleapis/googleapis LANGUAGE=go OUTPUT=.
cp -rvf github.com/eliaszs/erepro-apis/erepro .
rm -rf github.com

make PROTOINCLUDE=$GOPATH/src/github.com/googleapis/googleapis LANGUAGE=python OUTPUT=.python/
find .python/ -type f -name \*.go -delete

cat > .python/setup.py << EOF
from setuptools import setup, find_packages

setup(
    name='erepro',
    version='',
    packages=find_packages(),
    url='',
    license='',
    author='eliaszs',
    author_email='eliasz@ergodicity.io',
    description='',
    install_requires=[],
)
EOF
