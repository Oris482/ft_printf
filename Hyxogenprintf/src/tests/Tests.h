#ifndef MANDATORYTESTS_H
#define MANDATORYTESTS_H

#include <AirTester.h>
#include "../PrintfTester.h"

#define TESTS_ONE_SPECIFIER(sp) "%" sp

#define TESTS_NO_SPECIFIER_HELLOWORLD(sp) "Hello World!\n"
#define TESTS_ONE_SPECIFIER_HELLOWORLD(sp) "%" sp "ello World!\n"
#define TESTS_TWO_SPECIFIER_HELLOWORLD(sp) "%" sp "ello World!%" sp ""
#define TESTS_THREE_SPECIFIER_HELLOWORLD(sp) "%" sp "ello%" sp "World!%" sp ""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD(sp) "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp ""
#define TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i

#define TESTS_NO_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet su sp endisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare su sp endisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_ONE_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat%" sp "Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet su sp endisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare su sp endisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_TWO_SPECIFIER_LORUM(sp) "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat%" sp "Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.\nNulla malesuada pellentesque elit eget gravida cum. Scelerisque mauris pellentesque pulvinar pellentesque habitant morbi tristique senectus et. Condimentum lacinia quis vel eros donec ac odio. Dictum non consectetur a erat nam at lectus. At varius vel pharetra vel turpis nunc. Cursus eget nunc scelerisque viverra mauris. Tempor orci eu lobortis elementum nibh tellus molestie nunc. Convallis posuere morbi leo urna molestie at elementum. Fermentum leo vel orci porta non pulvinar neque laoreet su sp endisse. Nunc aliquet bibendum enim facilisis gravida neque. Diam volutpat commodo sed egestas egestas fringilla phasellus faucibus scelerisque. Id aliquet lectus proin nibh nisl. Lobortis scelerisque fermentum dui faucibus. Vitae proin sagittis nisl rhoncus mattis rhoncus. Ornare lectus sit amet est.\n\nMattis enim ut tellus elementum sagittis vitae et. Sed arcu non odio euismod lacinia at quis risus. Est ultricies integer quis auctor elit. Urna id volutpat lacus laoreet non curabitur. Mauris augue neque gravida in fermentum et. Dignissim sodales ut eu sem integer vitae justo. Erat velit scelerisque in dictum non consectetur a erat. In mollis nunc sed id semper risus in. Tortor vitae purus faucibus ornare su sp endisse sed nisi lacus sed. Eget est lorem ipsum dolor sit amet consectetur adipiscing. Pretium lectus quam id leo. Pretium vulputate sapien nec sagittis aliquam malesuada. Viverra ipsum nunc aliquet bibendum enim facilisis. Scelerisque fermentum dui faucibus in ornare quam viverra orci. At quis risus sed vulputate odio ut enim blandit. Sagittis%" sp " purus sit amet volutpat consequat mauris nunc congue."
#define TESTS_ONLY_SPECIFIER_LORUM(sp) "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp "%" sp ""
#define TESTS_ONLY_SPECIFIER_LORUM_ARG(i) i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i, i

#define TEST_PRINTF GetTestFunction()
#define CORRECT_PRINTF GetCorrectFunction()
#define TEST_PRINTF_FUNC(...) ASSERT_TRUE(ComparePrintf(TEST_PRINTF, CORRECT_PRINTF, __VA_ARGS__))

#define MAX_WIDTH 20
#define MAX_PREC 20

#define TESTER_GROUP_NAME_(specifier_name) specifier_name##_tests
#define TESTER_SPECIFIER_(specifier) %##specifier
//#define TESTER_GROUP_NAME_(test, specifier_name) test_##specifier_name

#define MANDATORY_SINGLE_SPECIFIER_(specifier_name, specifier, collection)												\
TEST(TESTER_GROUP_NAME_(specifier_name), single_##specifier_name##_test) {												\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(specifier), val);															\
	}																													\
}

#define MANDATORY_SPECIFIER_IN_STRING_(specifier_name, specifier, collection)											\
TEST(TESTER_GROUP_NAME_(specifier_name), specifier_name##_in_string_test) {												\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER_HELLOWORLD(specifier), val);												\
		TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER_LORUM(specifier), val);													\
	}																													\
}

#define MANDATORY_SPECIFIERS_IN_STRING_(specifier_name, specifier, collection)											\
TEST(TESTER_GROUP_NAME_(specifier_name), specifier_name##s_in_string_test) {											\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_TWO_SPECIFIER_HELLOWORLD(specifier), val, val);											\
		TEST_PRINTF_FUNC(TESTS_TWO_SPECIFIER_LORUM(specifier), val, val);												\
		TEST_PRINTF_FUNC(TESTS_THREE_SPECIFIER_HELLOWORLD(specifier), val, val, val);									\
	}																													\
}

#define MANDATORY_ONLY_SPECIFIERS_IN_STRING_(specifier_name, specifier, collection)										\
TEST(TESTER_GROUP_NAME_(specifier_name), only_##specifier_name##s_in_string_test) {										\
	for (auto val : collection) {																						\
    	TEST_PRINTF_FUNC(TESTS_ONLY_SPECIFIER_HELLOWORLD(specifier), TESTS_ONLY_SPECIFIER_HELLOWORLD_ARG(val));			\
    	TEST_PRINTF_FUNC(TESTS_ONLY_SPECIFIER_LORUM(specifier), TESTS_ONLY_SPECIFIER_LORUM_ARG(val));					\
	}																													\
}

/**
 * GENERIC TESTS
 * 
 * This has all the defines for the generic tests
 */

///Generic tests with only a single specifier in the format string
#define GENERIC_SINGLE_TEST_FORMAT_(format, flag, width, prec, specifier, ...)\
TEST_PRINTF_FUNC(format(flag width prec specifier), __VA_ARGS__)

#define GENERIC_TEST_SINGLE_VPREC_(format, flag, width, specifier, collection)\
for (auto val : collection) {										\
	for (int p = 0; p < MAX_PREC; p++) {							\
		GENERIC_SINGLE_TEST_FORMAT_(format, flag, width, ".*", specifier, p, val);\
    }																		\
}																			

#define GENERIC_SINGLE_TEST_VWIDTH_(format, flag, prec, specifier, collection)\
for (auto val : collection) {										\
	for (int w = 0; w < MAX_WIDTH; w++) {							\
		GENERIC_SINGLE_TEST_FORMAT_(format, flag, "*", prec, specifier, w, val);\
    }																		\
}	

#define GENERIC_SINGLE_TEST_VWIDTH_VPREC_(format, flag, specifier, collection)\
for (auto val : collection) {										\
	for (int w = 0; w < MAX_WIDTH; w++) {							\
		for (int p = 0; p < MAX_PREC; p++) {							\
			GENERIC_SINGLE_TEST_FORMAT_(format, flag, "*", ".*", specifier, w, p, val);\
    	}	\
    }\
}

//TWO
#define GENERIC_TEST_TWO_VPREC_(format, flag, width, specifier, collection)\
for (auto val : collection) {										\
	for (int p = 0; p < MAX_PREC; p++) {							\
		GENERIC_SINGLE_TEST_FORMAT_(format, flag, width, ".*", specifier, p, val, p, val);\
    }																		\
}																			

#define GENERIC_TEST_TWO_VWIDTH_(format, flag, prec, specifier, collection)\
for (auto val : collection) {										\
	for (int w = 0; w < MAX_WIDTH; w++) {							\
		GENERIC_SINGLE_TEST_FORMAT_(format, flag, "*", prec, specifier, w, val, w, val);\
    }																		\
}	

#define GENERIC_TEST_TWO_VWIDTH_VPREC_(format, flag, specifier, collection)\
for (auto val : collection) {										\
	for (int w = 0; w < MAX_WIDTH; w++) {							\
		for (int p = 0; p < MAX_PREC; p++) {							\
			GENERIC_SINGLE_TEST_FORMAT_(format, flag, "*", ".*", specifier, w, p, val, w, p, val);\
    	}	\
    }\
}

/**
 * END GENERIC TESTS
 * 
 */

/**
 * ONLY SINGLE SPECIFIER IN FORMAT STRING TESTS GENERIC FLAG
 * 
 */
#define BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_nwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, , ".", specifier, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, , ".1", specifier, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, , ".21", specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, , ".42", specifier, val);                          					\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_nwidth_vspec_##flag_name##_test) {			\
	GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER, flag, , specifier, collection);											\
}

#define BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_fwidth_nspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "1", , specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "21", , specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "42", , specifier, val);											\
	}																													\
}
//#define GENERIC_SINGLE_TEST_VWIDTH_(format, flag, prec, specifier, collection)
#define BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_vwidth_nspec_##flag_name##_test) {			\
	GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER, flag, , specifier, collection);									\
}

#define BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_fwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "1", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "1", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "1", ".21", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "1", ".42", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "21", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "21", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "21", ".21", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "21", ".42", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "42", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "42", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "42", ".21", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER, flag, "42", ".42", specifier, val);							\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_fwidth_vspec_##flag_name##_test) {							\
	for (auto val : collection) {																						\
		for (int p = 0; p < MAX_PREC; p++) {																			\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "1.*" specifier), p, val);												\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "21.*" specifier), p, val);											\
			TEST_PRINTF_FUNC(TESTS_ONE_SPECIFIER(flag "42.*" specifier), p, val);											\
		}																												\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_vwidth_fspec_##flag_name##_test) {							\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER, flag, ".", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER, flag, ".1", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER, flag, ".21", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER, flag, ".42", specifier, collection);									\
}

#define BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_##specifier_name##_vwidth_vspec_##flag_name##_test) {							\
GENERIC_SINGLE_TEST_VWIDTH_VPREC_(TESTS_ONE_SPECIFIER, flag, specifier, collection);									\
}
/**
 * END ONLY SINGLE SPECIFIER IN FORMAT STRING TESTS GENERIC FLAG
 * 
 */

/**
 * SINGLE SPECIFIER IN FORMAT STRING TESTS GENERIC FLAG
 * 
 */
#define BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_nwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, , ".", specifier, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, , ".1", specifier, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, , ".21", specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, , ".42", specifier, val);                          					\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, , ".", specifier, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, , ".1", specifier, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, , ".21", specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, , ".42", specifier, val);                          					\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_nwidth_vspec_##flag_name##_test) {			\
	GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, , specifier, collection);											\
	GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_LORUM, flag, , specifier, collection);											\
}

#define BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_fwidth_nspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "1", , specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "21", , specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "42", , specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "1", , specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "21", , specifier, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "42", , specifier, val);											\
	}																													\
}
//#define GENERIC_SINGLE_TEST_VWIDTH_(format, flag, prec, specifier, collection)
#define BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_vwidth_nspec_##flag_name##_test) {			\
	GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, , specifier, collection);									\
	GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_LORUM, flag, , specifier, collection);									\
}

#define BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_fwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "1", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "1", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "1", ".21", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "1", ".42", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "21", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "21", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "21", ".21", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "21", ".42", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "42", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "42", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "42", ".21", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "42", ".42", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "1", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "1", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "1", ".21", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "1", ".42", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "21", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "21", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "21", ".21", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "21", ".42", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "42", ".", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "42", ".1", specifier, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "42", ".21", specifier, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_ONE_SPECIFIER_LORUM, flag, "42", ".42", specifier, val);							\
	}																													\
}

#define BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_fwidth_vspec_##flag_name##_test) {							\
GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "1", specifier, collection);									\
GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "21", specifier, collection);									\
GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, "42", specifier, collection);									\
GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_LORUM, flag, "1", specifier, collection);									\
GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_LORUM, flag, "21", specifier, collection);									\
GENERIC_TEST_SINGLE_VPREC_(TESTS_ONE_SPECIFIER_LORUM, flag, "42", specifier, collection);\
}

#define BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_vwidth_fspec_##flag_name##_test) {							\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, ".", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, ".1", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, ".21", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, ".42", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_LORUM, flag, ".", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_LORUM, flag, ".1", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_LORUM, flag, ".21", specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_(TESTS_ONE_SPECIFIER_LORUM, flag, ".42", specifier, collection);									\
}

#define BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), single_string##specifier_name##_vwidth_vspec_##flag_name##_test) {							\
GENERIC_SINGLE_TEST_VWIDTH_VPREC_(TESTS_ONE_SPECIFIER_HELLOWORLD, flag, specifier, collection);									\
GENERIC_SINGLE_TEST_VWIDTH_VPREC_(TESTS_ONE_SPECIFIER_LORUM, flag, specifier, collection);									\
}
/**
 * END SINGLE SPECIFIER IN FORMAT STRING TESTS GENERIC FLAG
 * 
 */

/**
 * TWO SPECIFIER IN FORMAT STRING TESTS GENERIC FLAG
 * 
 */
#define BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_nwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, , ".1", specifier, val, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, , ".21", specifier, val, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, , ".42", specifier, val, val);                          					\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, , ".1", specifier, val, val);										\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, , ".21", specifier, val, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, , ".42", specifier, val, val);                          					\
	}																													\
}

#define BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_nwidth_vspec_##flag_name##_test) {			\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, , specifier, collection);											\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_LORUM, flag, , specifier, collection);											\
}

#define BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_fwidth_nspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "1", , specifier, val, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "21", , specifier, val, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "42", , specifier, val, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "1", , specifier, val, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "21", , specifier, val, val);											\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "42", , specifier, val, val);											\
	}																													\
}

#define BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

//#define GENERIC_SINGLE_TEST_VWIDTH_(format, flag, prec, specifier, collection)
#define BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_vwidth_nspec_##flag_name##_test) {			\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, , specifier, collection);									\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_LORUM, flag, , specifier, collection);									\
}

//DEBUG BOOKMARK
#define BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_TWO_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)				\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_fwidth_fspec_##flag_name##_test) {			\
	for (auto val : collection) {																						\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "1", ".1", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "1", ".21", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "1", ".42", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "21", ".1", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "21", ".21", specifier, val, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "21", ".42", specifier, val, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "42", ".1", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "42", ".21", specifier, val, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "42", ".42", specifier, val, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "1", ".1", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "1", ".21", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "1", ".42", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "21", ".1", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "21", ".21", specifier, val, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "21", ".42", specifier, val, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "42", ".1", specifier, val, val);								\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "42", ".21", specifier, val, val);							\
		GENERIC_SINGLE_TEST_FORMAT_(TESTS_TWO_SPECIFIER_LORUM, flag, "42", ".42", specifier, val, val);							\
	}																													\
}

#define BONUS_TWO_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_fwidth_vspec_##flag_name##_test) {							\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "1", specifier, collection);									\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "21", specifier, collection);									\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, "42", specifier, collection);									\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_LORUM, flag, "1", specifier, collection);									\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_LORUM, flag, "21", specifier, collection);									\
	GENERIC_TEST_TWO_VPREC_(TESTS_TWO_SPECIFIER_LORUM, flag, "42", specifier, collection);									\
}

#define BONUS_TWO_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_vwidth_fspec_##flag_name##_test) {							\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, ".1", specifier, collection);									\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, ".21", specifier, collection);									\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, ".42", specifier, collection);									\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_LORUM, flag, ".1", specifier, collection);									\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_LORUM, flag, ".21", specifier, collection);									\
	GENERIC_TEST_TWO_VWIDTH_(TESTS_TWO_SPECIFIER_LORUM, flag, ".42", specifier, collection);									\
}

#define BONUS_TWO_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, flag, flag_name, collection)										\
TEST(TESTER_GROUP_NAME_(bonus##specifier_name), two_string##specifier_name##_vwidth_vspec_##flag_name##_test) {							\
GENERIC_TEST_TWO_VWIDTH_VPREC_(TESTS_TWO_SPECIFIER_HELLOWORLD, flag, specifier, collection);									\
GENERIC_TEST_TWO_VWIDTH_VPREC_(TESTS_TWO_SPECIFIER_LORUM, flag, specifier, collection);									\
}
/**
 * END TWO SPECIFIER IN FORMAT STRING TESTS GENERIC FLAG
 * 
 */

#define BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

//SINGLE_SPECIFIER_STRING
#define BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

#define ALL_MANDATORY_TESTS(specifier_name, specifier, collection)														\
MANDATORY_SINGLE_SPECIFIER_(specifier_name, specifier, collection)													\
MANDATORY_SPECIFIER_IN_STRING_(specifier_name, specifier, collection)												\
MANDATORY_SPECIFIERS_IN_STRING_(specifier_name, specifier, collection)
//MANDATORY_ONLY_SPECIFIERS_IN_STRING_(specifier_name, specifier, GetTestVector())

/**
 * BONUS_SINGLE_SPECIFIER TESTS
 * 
 */
#define BONUS_SINGLE_SPECIFIER_MINUS_FLAG_TESTS(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)

#define BONUS_SINGLE_SPECIFIER_PLUS_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)

#define BONUS_SINGLE_SPECIFIER_BLANK_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)

#define BONUS_SINGLE_SPECIFIER_SHARP_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)

#define BONUS_SINGLE_SPECIFIER_ZERO_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)

#define BONUS_SINGLE_SPECIFIER_NO_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_(specifier_name, specifier, collection)
/**
 * END BONUS_SINGLE_SPECIFIER TESTS
 * 
 */

/**
 * BONUS_SINGLE_SPECIFIER_STRING TESTS
 * 
 */

#define BONUS_SINGLE_SPECIFIER_STRING_MINUS_FLAG_TESTS(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_PLUS_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_BLANK_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_SHARP_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_ZERO_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)

#define BONUS_SINGLE_SPECIFIER_STRING_NO_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_STRING_NWIDTH_FPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_NPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_FPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_STRING_FWIDTH_VPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_FPREC_(specifier_name, specifier, collection)												\
BONUS_SINGLE_SPECIFIER_STRING_VWIDTH_VPREC_(specifier_name, specifier, collection)

/**
 * END BONUS_SINGLE_SPECIFIER_STRING TESTS
 * 
 */

/**
 * BONUS_TWO_SPECIFIER_STRING TESTS
 * 
 */

#define BONUS_TWO_SPECIFIER_STRING_MINUS_FLAG_TESTS(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)

#define BONUS_TWO_SPECIFIER_STRING_PLUS_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)

#define BONUS_TWO_SPECIFIER_STRING_BLANK_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)

#define BONUS_TWO_SPECIFIER_STRING_SHARP_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)

#define BONUS_TWO_SPECIFIER_STRING_ZERO_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)

#define BONUS_TWO_SPECIFIER_STRING_NO_FLAG_TEST(specifier_name, specifier, collection)\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_NPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)							\
BONUS_TWO_SPECIFIER_STRING_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, , nflag, collection)

/**
 * END BONUS_TWO_SPECIFIER_STRING TESTS
 * 
 */
#define BONUS_SINGLE_SPECIFIER_WIDTH_TESTS(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_WIDTH_MINUS_FLAG_TESTS(specifier_name, specifier, collection)							\
BONUS_SINGLE_SPECIFIER_WIDTH_PLUS_FLAG_TESTS(specifier_name, specifier, collection)							\
BONUS_SINGLE_SPECIFIER_WIDTH_BLANK_FLAG_TESTS(specifier_name, specifier, collection)							\
BONUS_SINGLE_SPECIFIER_WIDTH_ZERO_FLAG_TESTS(specifier_name, specifier, collection)							\

#define BONUS_ALL_WIDTH_TESTS(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_WIDTH_TESTS(specifier_name, specifier, collection)

#define BONUS_SINGLE_SPECIFIER_PREC_TESTS(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "+", pflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)							\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)

#define BONUS_ALL_PREC_TESTS(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_PREC_TESTS(specifier_name, specifier, collection)

#define BONUS_SINGLE_SPECIFIER_MIXED_TESTS(specifier_name, specifier, collection)\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_(specifier_name, specifier, collection)										\
\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "-", mflag, collection)										\
\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "p", pflag, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "p", pflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "p", pflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "p", pflag, collection)										\
\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, " ", bflag, collection)										\
\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "#", sflag, collection)										\
\
BONUS_SINGLE_SPECIFIER_FWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_FPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_VPREC_FLAG_X_(specifier_name, specifier, "0", zflag, collection)										

#define ALL_BONUS_TESTS(specifier_name, specifier, collection)															\
BONUS_ALL_WIDTH_TESTS(specifier_name, specifier, collection)															\
BONUS_ALL_PREC_TESTS(specifier_name, specifier, collection)																\

/*
BONUS_SINGLE_SPECIFIER_NWIDTH_FPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_NWIDTH_VPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_FWIDTH_NPREC_(specifier_name, specifier, collection)										\
BONUS_SINGLE_SPECIFIER_VWIDTH_NPREC_(specifier_name, specifier, collection)										\


*/
// typedef int (*PrintfFunc_T)(const char *, ...);
typedef int (*CorrectPrintfFunc_T)(char *, const char *, ...);
typedef int (*TestPrintfFunc_T)(const char *, ...);

TestPrintfFunc_T GetTestFunction();
CorrectPrintfFunc_T GetCorrectFunction();

#endif //MANDATORYTESTS_H
