//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSData, NSDictionary;

@protocol _CPSafariUsagePropensity <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(nonatomic) int totalEngagements;
@property(nonatomic) float other;
@property(nonatomic) float goToSite;
@property(nonatomic) float thirdPartyCompletionOrRecentSearch;
@property(nonatomic) float thirdPartyTap;
@property(nonatomic) float thirdPartyGoto;
@property(nonatomic) float parsecTap;
@property(nonatomic) float parsecGoto;
@property(nonatomic) float localTap;
@property(nonatomic) float localGoto;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
@end

