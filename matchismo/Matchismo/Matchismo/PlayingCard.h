//
//  PlayingCard.h
//  Matchismo
//
//  Created by chris on 04/10/2013.
//  Copyright (c) 2013 Christopher Hosegood. All rights reserved.
//

#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
