//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol FCTagRanking;

@interface FCTagSubscriptionSorter : NSObject
{
    id <FCTagRanking> _tagRanker;
}

@property(readonly, nonatomic) id <FCTagRanking> tagRanker; // @synthesize tagRanker=_tagRanker;
// - (void).cxx_destruct;
- (id)sortTagSubscriptions:(id)arg1;
- (id)initWithTagRanker:(id)arg1;

@end

