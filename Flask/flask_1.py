from flask import Flask, render_template
app = Flask(__name__)

@app.route('/hello')
def hello_world():
    return render_template('hello.html')
app.run(host="192.168.1.13")