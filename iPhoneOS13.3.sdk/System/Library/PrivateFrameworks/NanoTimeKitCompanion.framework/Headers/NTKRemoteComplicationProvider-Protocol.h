//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString;

@protocol NTKRemoteComplicationProvider <NSObject>
- (NSString *)localizedAppNameForClientIdentifier:(NSString *)arg1;
- (BOOL)vendorExistsWithClientIdentifier:(NSString *)arg1 appBundleIdentifier:(NSString *)arg2;
- (void)enumerateEnabledVendorsForComplicationFamily:(long long)arg1 withBlock:(void (^)(NSString *, NSString *))arg2;
@end

