//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, NSString;

@interface ECAuthScheme : NSObject
{
}

+ (id)schemeWithApplescriptScheme:(unsigned int)arg1;
+ (id)schemeWithName:(id)arg1;
+ (id)knownSchemes;
+ (id)allocWithZone:(_NSZone )arg1;
@property(readonly, nonatomic) unsigned int applescriptScheme;
@property(readonly, copy, nonatomic) NSString *humanReadableName;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSSet *supportedSASLMechanisms;
@property(readonly, nonatomic) BOOL requiresPassword;
@property(readonly, nonatomic) BOOL requiresUsername;

@end

