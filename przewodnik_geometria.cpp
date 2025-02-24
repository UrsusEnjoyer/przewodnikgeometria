#include <iostream>
#include <cmath>

using namespace std;

int main() {
    
        cout << "OBLICZANIE POL, OBWODOW TWIERDZEN ETC.\n";
        cout << "-----------------------------------------------\n";
        cout << "Wybierz 1, aby dowiedziec sie o wzorach kwadratu\n";
        cout << "Wybierz 2, aby dowiedziec sie o wzorach prostokata\n";
        cout << "Wybierz 3, aby dowiedziec sie o wzorach trojkata\n";
        cout << "Wybierz 4, aby dowiedziec sie o wzorach rombu\n";
        cout << "Wybierz 5, aby dowiedziec sie o wzorach rownolegloboku\n";
        cout << "Wybierz 6, aby dowiedziec sie o wzorach trapezu\n";
        cout << "Wybierz 7, aby dowiedziec sie o wzorach kola\n";
        cout << "Wybierz 8, aby dowiedziec sie o wzorach prostopadloscianu\n";
        cout << "Wybierz 9, aby dowiedziec sie o wzorach ostroslupa\n";
        cout << "Wybierz 0, aby wyjsc z programu\n";
		cout << "-----------------------------------------------\n";
        int wybor;
        cout << "O jakiej figurze chcesz sie dowiedziec? ";
        cin >> wybor;

        if (wybor == 0) {
            cout << "Dziekuje za skorzystanie z programu. Do widzenia!\n";
            cout << "-----------------------------------------------\n";
        }

        switch (wybor) {
            case 1: { // Kwadrat
                cout << "KWADRAT\n";
                cout << "1. Pole kwadratu: a * a\n";
                cout << "2. Obwod kwadratu: 4 * a\n";
                cout << "3. Przekatna kwadratu: a * sqrt(2)\n";
                int kwadrat;
                cout << "Wybierz, co chcesz obliczyc (1/2/3): ";
                cin >> kwadrat;

                switch (kwadrat) {
                    case 1: {
                        float a;
                        while (true) {
                            cout << "Podaj dlugosc boku kwadratu: ";
                            cin >> a;
                            if (a > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        cout << "Pole kwadratu wynosi: " << a * a << endl;
                        break;
                    }
                    case 2: {
                        float a;
                        while (true) {
                            cout << "Podaj dlugosc boku kwadratu: ";
                            cin >> a;
                            if (a > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        cout << "Obwod kwadratu wynosi: " << 4 * a << endl;
                        break;
                    }
                    case 3: {
                        float a;
                        while (true) {
                            cout << "Podaj dlugosc boku kwadratu: ";
                            cin >> a;
                            if (a > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        cout << "Przekatna kwadratu wynosi: " << a * sqrt(2) << endl;
                        break;
                    }
                    default:
                        cout << "Nieprawidlowy wybor." << endl;
                }
                break;
            }
            case 2: { // Prostok�t
                cout << "PROSTOKAT\n";
                cout << "1. Pole prostokata: a * b\n";
                cout << "2. Obwod prostokata: 2 * (a + b)\n";
                int prostokat;
                cout << "Wybierz, co chcesz obliczyc (1/2): ";
                cin >> prostokat;

                switch (prostokat) {
                    case 1: {
                        float a, b;
                        while (true) {
                            cout << "Podaj dlugosc pierwszego boku prostokata: ";
                            cin >> a;
                            if (a > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        while (true) {
                            cout << "Podaj dlugosc drugiego boku prostokata: ";
                            cin >> b;
                            if (b > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        cout << "Pole prostokata wynosi: " << a * b << endl;
                        break;
                    }
                    case 2: {
                        float a, b;
                        while (true) {
                            cout << "Podaj dlugosc pierwszego boku prostokata: ";
                            cin >> a;
                            if (a > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        while (true) {
                            cout << "Podaj dlugosc drugiego boku prostokata: ";
                            cin >> b;
                            if (b > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        cout << "Obwod prostokata wynosi: " << 2 * (a + b) << endl;
                        break;
                    }
                    default:
                        cout << "Nieprawidlowy wybor." << endl;
                }
                break;
            }
            case 3: { // Tr�jk�t
                cout << "TROJKAT\n";
                cout << "1. Pole trojkata: (a * h) / 2\n";
                cout << "2. Obwod trojkata: a + b + c\n";
                cout << "3. Twierdzenie Pitagorasa\n";
                int trojkat;
                cout << "Wybierz, co chcesz obliczyc (1/2/3): ";
                cin >> trojkat;

                switch (trojkat) {
                    case 1: {
                        float a, h;
                        while (true) {
                            cout << "Podaj dlugosc podstawy trojkata: ";
                            cin >> a;
                            if (a > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        while (true) {
                            cout << "Podaj dlugosc wysokosci: ";
                            cin >> h;
                            if (h > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        cout << "Pole trojkata wynosi: " << (a * h) / 2 << endl;
                        break;
                    }
                    case 2: {
                        float a, b, c;
                        while (true) {
                            cout << "Podaj dlugosci bokow trojkata (a, b, c): ";
                            cin >> a >> b >> c;
                            if (a > 0 && b > 0 && c > 0) break;
                            cout << "Podaj liczby wieksze od 0." << endl;
                        }
                        cout << "Obwod trojkata wynosi: " << a + b + c << endl;
                        break;
                    }
                    case 3: {
                        float a, b;
                        while (true) {
                            cout << "Podaj dlugosci pierwszej przyprostokatnej trojkata: ";
                            cin >> a;
                            cout << "Podaj dlugosc drugiej przyprostokatnej trojkata: ";
                            cin >> b;
                            if (a > 0 && b > 0) break;
                            cout << "Podaj liczby wieksze od 0." << endl;
                        }
                        cout << "Przeciwprostokatna wynosi: " << sqrt(a * a + b * b) << endl;
                        break;
                    }
                    default:
                        cout << "Nieprawidlowy wybor." << endl;
                }
                break;
            }
            case 4: { // Romb
                cout << "ROMB\n";
                cout << "1. Pole rombu: a * h lub (1/2) * d1 * d2\n";
                cout << "2. Obwod rombu: 4 * a\n";
                int romb;
                cout << "Wybierz, co chcesz obliczyc (1/2): ";
                cin >> romb;

                switch (romb) {
                    case 1: {
                        float a, h, d1, d2;
                        int wybor_pola;
                        cout << "Wybierz wzor (1 = bok i wysokosc, 2 = przekatne): ";
                        cin >> wybor_pola;
                        if (wybor_pola == 1) {
                            while (true) {
                                cout << "Podaj dlugosc boku rombu: ";
                                cin >> a;
                                if (a > 0) break;
                                cout << "Podaj liczbe wieksza od 0." << endl;
                            }
                            while (true) {
                                cout << "Podaj dlugosc wysokosci rombu: ";
                                cin >> h;
                                if (h > 0) break;
                                cout << "Podaj liczbe wieksza od 0." << endl;
                            }
                            cout << "Pole rombu wynosi: " << a * h << endl;
                        } else if (wybor_pola == 2) {
                            while (true) {
                                cout << "Podaj dlugosci przekatnych rombu (d1, d2): ";
                                cin >> d1 >> d2;
                                if (d1 > 0 && d2 > 0) break;
                                cout << "Podaj liczby wieksze od 0." << endl;
                            }
                            cout << "Pole rombu wynosi: " << (d1 * d2) / 2 << endl;
                        } else {
                            cout << "Nieprawidlowy wybor." << endl;
                        }
                        break;
                    }
                    case 2: {
                        float a;
                        while (true) {
                            cout << "Podaj dlugosc boku rombu: ";
                            cin >> a;
                            if (a > 0) break;
                            cout << "Podaj liczbe wieksza od 0." << endl;
                        }
                        cout << "Obwod rombu wynosi: " << 4 * a << endl;
                        break;
                    }
                    default:
                        cout << "Nieprawidlowy wybor." << endl;
                }
                break;
            }
            case 5: { // R�wnoleg�obok
    			cout << "ROWNOLEGLOBOK\n";
   				 cout << "1. Pole rownolegloboku: a * h\n";
    			cout << "2. Obwod rownolegloboku: 2 * (a + b)\n";
    			int rownoleglobok;
    			cout << "Wybierz, co chcesz obliczyc (1/2): ";
    			cin >> rownoleglobok;

    			switch (rownoleglobok) {
       				case 1: { // Pole
            		float a, h;
            		while (true) {
                	cout << "Podaj dlugosc podstawy rownolegloboku: ";
                	cin >> a;
                	if (a > 0) break;
                		cout << "Podaj liczbe wieksza od 0." << endl;
            	}
            	while (true) {
                	cout << "Podaj dlugosc wysokosci rownolegloboku: ";
                	cin >> h;
                	if (h > 0) break;
                		cout << "Podaj liczbe wieksza od 0." << endl;
            	}
            	cout << "Pole rownolegloboku wynosi: " << a * h << endl;
            	break;
        	}
        		case 2: { // Obw�d
            		float a, b;
            		while (true) {
                		cout << "Podaj dlugosc pierwszego boku rownolegloboku: ";
                		cin >> a;
                		if (a > 0) break;
                			cout << "Podaj liczbe wieksza od 0." << endl;
            		}
            		while (true) {
                		cout << "Podaj dlugosc drugiego boku rownolegloboku: ";
                		cin >> b;
                		if (b > 0) break;
                		cout << "Podaj liczbe wieksza od 0." << endl;
            		}
            		cout << "Obwod rownolegloboku wynosi: " << 2 * (a + b) << endl;
            	break;
       	 		}
        		default:
            		cout << "Nieprawidlowy wybor." << endl;
            		return 0;
    			}
    			break;
				}	
			case 6: {  // Trapez
            int trapez;
            cout << "TRAPEZ\n";
            cout << "Wzor na pole trapezu to: 0.5*(a+b)*h\n";
            cout << "Wzor na obwod trapezu to: a+b+c+d\n";
            cout << "Z ktorego wzoru chcesz skorzystac? Wybierz 1 lub 2: ";
            cin >> trapez;

            switch (trapez) {
                case 1: {
                    float a, b, h;
                    while (true) {
                        cout << "Podaj dlugosc pierwszej podstawy trapezu: ";
                        cin >> a;
                        if (a > 0) break;
                        cout << "Podaj liczbe wieksza od 0!" << endl;
                    }
                    while (true) {
                        cout << "Podaj dlugosc drugiej podstawy trapezu: ";
                        cin >> b;
                        if (b > 0) break;
                        cout << "Podaj liczbe wieksza od 0!" << endl;
                    }
                    while (true) {
                        cout << "Podaj dlugosc wysokosci tego trapezu: ";
                        cin >> h;
                        if (h > 0) break;
                        cout << "Podaj liczbe wieksza od 0!" << endl;
                    }
                    cout << "Pole tego trapezu wynosi: " << 0.5 * (a + b) * h << endl;
                    break;
                }

                case 2: {
                    float a, b, c, d;
                    while (true) {
                        cout << "Podaj dlugosc pierwszego boku trapezu: ";
                        cin >> a;
                        if (a > 0) break;
                        cout << "Podaj liczbe wieksza od 0!" << endl;
                    }
                    while (true) {
                        cout << "Podaj dlugosc drugiego boku trapezu: ";
                        cin >> b;
                        if (b > 0) break;
                        cout << "Podaj liczbe wieksza od 0!" << endl;
                    }
                    while (true) {
                        cout << "Podaj dlugosc trzeciego boku trapezu: ";
                        cin >> c;
                        if (c > 0) break;
                        cout << "Podaj liczbe wieksza od 0!" << endl;
                    }
                    while (true) {
                        cout << "Podaj dlugosc czwartego boku trapezu: ";
                        cin >> d;
                        if (d > 0) break;
                        cout << "Podaj liczbe wieksza od 0!" << endl;
                    }
                    cout << "Obwod tego trapezu wynosi: " << a + b + c + d << endl;
                    break;
                }

                default:
                    cout << "Nieprawidlowy wybor." << endl;
                    break;
            	}
            	break;
        	}
        	case 7: {
        		int kolo;
        		cout << "KOLO\n";
        		cout << "1. Wzor na pole kola to: 3.14*r*r\n";
        		cout << "2. Wzor na obwod kola to: 2*3.14*r\n";
        		cout << "Z ktorego wzoru chcesz skorzystac? Wybierz 1 albo 2: ";
        		cin >> kolo;
        		switch(kolo) {
        			case 1: {
        				float r;
        				while(true) {
        					cout << "Podaj dlugosc promienia kola: ";
        					cin >> r;
        					if(r > 0) break;
        					cout << "Podaj liczbe wieksza od 0!";
						}
						cout << "Pole kola wynosi: " << M_PI*r*r << endl;
						break;
					}
					case 2: {
						float r;
						while(true) {
							cout << "Podaj dlugosc promienia kola: ";
							cin >> r;
							if(r > 0) break;
							cout << "Podaj liczbe wieksza od 0!";
						}
						cout << "Obwod kola wynosi: " << 2*M_PI*r << endl;
						break;
					}
					default:
						cout << "Nieprawidlowy wybor" << endl;
				}
				break;
			}
			case 8: { 
            cout << "PROSTOPADLOSCIAN\n";
            cout << "1. Pole powierzchni calkowitej: 2 * (a*b + b*c + a*c)\n";
            cout << "2. Objetosc: a * b * c\n";
            int prostopadloscian;
            cout << "Wybierz, co chcesz obliczyc (1/2): ";
            cin >> prostopadloscian;

            switch (prostopadloscian) {
                case 1: { 
                    float a, b, c;
                    while (true) {
                        cout << "Podaj dlugosc pierwszego boku (a): ";
                        cin >> a;
                        if (a > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    while (true) {
                        cout << "Podaj dlugosc drugiego boku (b): ";
                        cin >> b;
                        if (b > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    while (true) {
                        cout << "Podaj dlugosc trzeciego boku (c): ";
                        cin >> c;
                        if (c > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    cout << "Pole powierzchni calkowitej prostopadloscianu wynosi: " << 2 * (a * b + b * c + a * c) << endl;
                    break;
                }
                case 2: { 
                    float a, b, c;
                    while (true) {
                        cout << "Podaj dlugosc pierwszego boku (a): ";
                        cin >> a;
                        if (a > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    while (true) {
                        cout << "Podaj dlugosc drugiego boku (b): ";
                        cin >> b;
                        if (b > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    while (true) {
                        cout << "Podaj dlugosc trzeciego boku (c): ";
                        cin >> c;
                        if (c > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    cout << "Objetosc prostopadloscianu wynosi: " << a * b * c << endl;
                    break;
                }
                default:
                    cout << "Nieprawidlowy wybor." << endl;
            	}
            	break;
        	}
        	case 9: { 
            cout << "OSTROSLUP\n";
            cout << "1. Pole powierzchni calkowitej\n";
            cout << "2. Objetosc: (1/3) * P_podstawy * h\n";
            int ostroslup;
            cout << "Wybierz, co chcesz obliczyc (1/2): ";
            cin >> ostroslup;

            switch (ostroslup) {
                case 1: { 
                    float P_podstawy, P_scian_bocznych;
                    while (true) {
                        cout << "Podaj pole podstawy ostroslupa: ";
                        cin >> P_podstawy;
                        if (P_podstawy > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    while (true) {
                        cout << "Podaj pole scian bocznych ostroslupa: ";
                        cin >> P_scian_bocznych;
                        if (P_scian_bocznych > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    cout << "Pole powierzchni calkowitej ostroslupa wynosi: " << P_podstawy + P_scian_bocznych << endl;
                    break;
                }
                case 2: { 
                    float P_podstawy, h;
                    while (true) {
                        cout << "Podaj pole podstawy ostroslupa: ";
                        cin >> P_podstawy;
                        if (P_podstawy > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    while (true) {
                        cout << "Podaj wysokosc ostroslupa: ";
                        cin >> h;
                        if (h > 0) break;
                        cout << "Podaj liczbe wieksza od 0!\n";
                    }
                    cout << "Objetosc ostroslupa wynosi: " << (1.0 / 3) * P_podstawy * h << endl;
                    break;
                }
                default:
                    cout << "Nieprawidlowy wybor." << endl;
            }
            break;
        }
            default:
                cout << "Nieprawidlowy wybor figury. Sprobuj ponownie.\n";
        }
    return 0;
}

