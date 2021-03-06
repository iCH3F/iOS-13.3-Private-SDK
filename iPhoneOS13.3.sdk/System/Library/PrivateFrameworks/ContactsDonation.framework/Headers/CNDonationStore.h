//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CNDonationAgentAdapter;

@interface CNDonationStore : NSObject
{
    id <CNDonationAgentAdapter> _adapter;
}

@property(readonly, nonatomic) id <CNDonationAgentAdapter> adapter; // @synthesize adapter=_adapter;
// - (void).cxx_destruct;
- (void)removeAllRejectionsWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
- (void)rejectValuesWithClusterIdentifier:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)rejectValueWithDonationIdentifier:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)changeFromAccount:(id)arg1 toAccount:(id)arg2;
- (id)meCardDonations;
- (id)donatedMeCardEither;
- (id)donatedMeCard;
- (void)fetchDonatedMeCard:(id /* CDUnknownBlockType */)arg1;
- (void)removeDonatedMeCardValuesForIdentifiers:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (void)donateMeCardValues:(id)arg1 completionHandler:(id /* CDUnknownBlockType */)arg2;
- (id)initWithAdapter:(id)arg1;
- (id)init;

@end

