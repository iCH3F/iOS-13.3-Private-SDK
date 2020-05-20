//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SASportsMatchup.h>

@class NSNumber, NSString;

@interface SASportsBaseballMatchup : SASportsMatchup
{
}

+ (id)baseballMatchupWithDictionary:(id)arg1 context:(id)arg2;
+ (id)baseballMatchup;
@property(copy, nonatomic) NSNumber *strikes;
@property(copy, nonatomic) NSNumber *outs;
@property(copy, nonatomic) NSNumber *onThird;
@property(copy, nonatomic) NSNumber *onSecond;
@property(copy, nonatomic) NSNumber *onFirst;
@property(copy, nonatomic) NSString *inningStatus;
@property(copy, nonatomic) NSNumber *homeHits;
@property(copy, nonatomic) NSNumber *homeErrors;
@property(copy, nonatomic) NSNumber *balls;
@property(copy, nonatomic) NSNumber *awayHits;
@property(copy, nonatomic) NSNumber *awayErrors;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
