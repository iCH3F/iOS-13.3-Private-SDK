//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SignpostSupport/SignpostPredicateProducer-Protocol.h>

@class NSPredicate, NSSet;

@interface SignpostSupportPIDFilter : NSObject <SignpostPredicateProducer>
{
    BOOL __wantsNotEqual;
    NSSet *_pidSet;
}

@property(readonly, nonatomic) BOOL _wantsNotEqual; // @synthesize _wantsNotEqual=__wantsNotEqual;
@property(readonly, nonatomic) NSSet *pidSet; // @synthesize pidSet=_pidSet;
// - (void).cxx_destruct;
- (void)addPIDNumberSet:(id)arg1;
- (void)addPIDNumber:(id)arg1;
@property(readonly, nonatomic) NSPredicate *predicateEquivalent;
@property(readonly, nonatomic) NSUInteger _compoundPredicateType;
- (BOOL)_wantsNotSubsystem;
- (BOOL)passesPIDNumber:(id)arg1;
- (id)init;

@end

