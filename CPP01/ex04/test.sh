# Compiler
c++ -Wall -Wextra -Werror -std=c++98 main.cpp -o Sed

echo "=== Test 1 : Cas normal ==="
echo "Hello world" > test1.txt
./Sed test1.txt "Hello" "Hi"
cat test1.txt.replace
echo ""

echo "=== Test 2 : Multiples occurrences ==="
echo "abc abc abc" > test2.txt
./Sed test2.txt "abc" "xyz"
cat test2.txt.replace
echo ""

echo "=== Test 3 : String non trouvé ==="
echo "Hello world" > test3.txt
./Sed test3.txt "goodbye" "hi"
cat test3.txt.replace
echo ""

echo "=== Test 4 : Fichier vide ==="
touch test4.txt
./Sed test4.txt "hello" "hi"
cat test4.txt.replace
echo "(fichier vide - normal)"
echo ""


echo "=== Test 5 : Suppression ==="
echo "delete this delete" > test5.txt
./Sed test5.txt "delete" ""
cat test5.txt.replace
echo ""

echo "=== Test 6 : Erreur - fichier inexistant ==="
./Sed nonexistent.txt "a" "b"
echo ""

echo "=== Test 7 : Erreur - search vide ==="
echo "test" > test7.txt
./Sed test7.txt "" "hi"
echo ""

# Nettoyage
rm -f test*.txt test*.txt.replace Sed