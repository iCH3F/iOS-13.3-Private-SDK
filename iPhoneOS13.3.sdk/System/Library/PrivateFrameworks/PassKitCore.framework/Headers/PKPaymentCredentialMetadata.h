//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface PKPaymentCredentialMetadata : NSObject
{
    NSString *_localizedDisplayName;
    NSString *_value;
}

+ (id)paymentCredentialMetadataWithConfiguration:(id)arg1;
+ (Class)classForValueType:(id)arg1;
@property(readonly, copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(readonly, copy, nonatomic) NSString *localizedDisplayName; // @synthesize localizedDisplayName=_localizedDisplayName;
// - (void).cxx_destruct;
- (id)displayString;
- (id)initWithConfiguration:(id)arg1;

@end

