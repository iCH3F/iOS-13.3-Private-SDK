//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSProcessPredicateImpl.h>

@class NSSet;

@interface RBSCompoundPredicate : RBSProcessPredicateImpl
{
    NSSet *_predicates;
}

+ (BOOL)supportsBSXPCSecureCoding;
// - (void).cxx_destruct;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (BOOL)matchesProcess:(id)arg1;
- (id)initWithPredicates:(id)arg1;

@end

