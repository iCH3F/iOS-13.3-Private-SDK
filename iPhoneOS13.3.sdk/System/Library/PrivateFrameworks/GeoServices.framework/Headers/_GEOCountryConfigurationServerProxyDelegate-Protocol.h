//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;
@protocol _GEOCountryConfigurationServerProxy;

@protocol _GEOCountryConfigurationServerProxyDelegate <NSObject>
- (void)serverProxy:(id <_GEOCountryConfigurationServerProxy>)arg1 countryCodeDidChange:(NSString *)arg2;
- (void)serverProxyProvidersDidChange:(id <_GEOCountryConfigurationServerProxy>)arg1;
@end

