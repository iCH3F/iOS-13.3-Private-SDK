//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCommand.h>

@class NSString;

@interface FCRegisterDeviceTokenCommand : FCCommand
{
    NSString *_userID;
    NSString *_deviceToken;
    NSString *_storefrontID;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *storefrontID; // @synthesize storefrontID=_storefrontID;
@property(copy, nonatomic) NSString *deviceToken; // @synthesize deviceToken=_deviceToken;
@property(copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
// - (void).cxx_destruct;
- (void)executeWithContext:(id)arg1 delegate:(id)arg2 qualityOfService:(long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUserID:(id)arg1 deviceToken:(id)arg2 storefrontID:(id)arg3;

@end

