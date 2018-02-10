C=g++
OUTEXE=prog
TESTS_DIR="tests"

mkdir -p bin

$C *.cpp -o bin/$OUTEXE

for TEST in ${TESTS_DIR}/t*; do

    echo "====== ${TEST}"
    cat $TEST
    echo "------ RUN: "
    bin/$OUTEXE < $TEST

done