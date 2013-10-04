//
//  Deck.h
//  Matchismo
//
//  Created by chris on 04/10/2013.
//  Copyright (c) 2013 Christopher Hosegood. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void) addCard: (Card *) card atTop: (BOOL) atTop;
- (Card *) drawRandomCard;

@end
