//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCPersonalizationFeature.h>

@interface FCPublisherPremiumFeature : FCPersonalizationFeature
{
    BOOL _premium;
}

@property(nonatomic) BOOL premium; // @synthesize premium=_premium;
- (id)fr_description;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)initWithTagID:(id)arg1 premium:(BOOL)arg2;
- (id)init;

@end

