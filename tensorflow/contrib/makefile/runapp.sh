echo "unlock screen"
adb shell input keyevent 82
sleep 3 
echo "kill existing tensorflow demo app" 
adb shell am force-stop org.tensorflow.demo
sleep 3

echo "run tensroflow demo"
adb shell am start -a android.intent.action.MAIN -c android.intent.category.LAUNCHER -n org.tensorflow.demo/.ClassifierActivity 
