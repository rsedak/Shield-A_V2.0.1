 /* Buzzer and SW1
 *  
 * Created 2019 by Robert Sedak
 * 
 * This example code is in the public domain.
 *  
 *  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
 *  EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
 *  OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
 *  NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHOR(S) OR 
 *  CONTRIBUTOR(S) BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER 
 *  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, 
 *  ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR 
 *  THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

void setup() {
  // Set SW1 
  pinMode(A1, INPUT_PULLUP);

  // Set buzzer pin
  pinMode(13, OUTPUT);
} // end of setup function

void loop() {

  // read the state of the SW1 push button
  // and while the push button is pressed, turn ON and OFF buzzer
  // with 1 milisecond delay
  while (digitalRead(A1) == 0){
    digitalWrite(13, HIGH);
    delay(1);
    digitalWrite(13, LOW);
    delay(1);
  }
} // end of loop function
