//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCFetchedValueDescriptor.h>

@class FCFetchedValueManager;

@interface FCVanityURLConfigurationFetchedValueDescriptor : FCFetchedValueDescriptor
{
    FCFetchedValueManager *_configurationManager;
}

@property(readonly, nonatomic) FCFetchedValueManager *configurationManager; // @synthesize configurationManager=_configurationManager;
// - (void).cxx_destruct;
- (id)_vanityURLConfiguration;
- (id)inputManagers;
- (BOOL)isValue:(id)arg1 equalToValue:(id)arg2;
- (void)fetchValueWithCachePolicy:(NSUInteger)arg1 qualityOfService:(long long)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (id)fastCachedValue;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithConfigurationManager:(id)arg1;
- (id)init;

@end

