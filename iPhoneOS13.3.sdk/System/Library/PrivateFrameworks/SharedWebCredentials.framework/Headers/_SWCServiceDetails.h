//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class _SWCServiceSpecifier;

@interface _SWCServiceDetails : NSObject <NSSecureCoding>
{
    struct SWCFields _fields;
    _SWCServiceSpecifier *_serviceSpecifier;
}

+ (BOOL)supportsSecureCoding;
+ (id)new;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(NSUInteger)arg3 error:(id )arg4;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 limit:(NSUInteger)arg2 error:(id )arg3;
+ (id)serviceDetailsWithServiceSpecifier:(id)arg1 error:(id )arg2;
+ (id)_serviceDetailsWithServiceSpecifier:(id)arg1 URLComponents:(id)arg2 limit:(NSUInteger)arg3 error:(id )arg4;
@property(readonly) _SWCServiceSpecifier *serviceSpecifier; // @synthesize serviceSpecifier=_serviceSpecifier;
// - (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (NSUInteger)hash;
- (BOOL)isEqual:(id)arg1;
- (id)_initWithServiceSpecifier:(id)arg1 fields:(const struct SWCFields )arg2;
- (id)init;
- (void)waitForSiteApprovalWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
@property(readonly) unsigned char frameworkApprovalState;
@property(readonly) unsigned char siteApprovalState;
- (BOOL)setUserApprovalState:(unsigned char)arg1 error:(id )arg2;
@property(nonatomic) unsigned char userApprovalState;
@property(readonly, getter=isApproved) BOOL approved;
@property(readonly, getter=isEnterpriseManaged) BOOL enterpriseManaged;
@property(readonly, getter=isWatchKitExtension) BOOL watchKitExtension;
@property(readonly, getter=isAlwaysEnabled) BOOL alwaysEnabled;
@property(readonly, getter=wasReadFromDisk) BOOL readFromDisk;
@property(readonly, getter=isSystemApplication) BOOL systemApplication;
@property(readonly, getter=isUpdating) BOOL updating;

@end

