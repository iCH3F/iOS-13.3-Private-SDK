//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IKCSSRuleList : NSObject
{
    NSMutableArray *rules;
}

// - (void).cxx_destruct;
- (id)description;
- (NSUInteger)count;
- (id)ruleAtIndex:(NSUInteger)arg1;
- (id)lastRule;
- (id)firstRule;
- (void)addRule:(id)arg1;
- (id)init;

@end

