//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CNFInternalSettingsUtilities : NSObject
{
}

+ (void)setIDSEnvironment:(id)arg1;
+ (id)IDSEnvironment;
+ (void)setCurrentInternalSettingsBundle:(id)arg1;
+ (id)currentInternalSettingsBundle;
+ (void)signOutAllAccounts;
+ (void)nukeKeychain;
+ (void)killEverything;
+ (void)killMobileSMS;
+ (void)killMobilePhone;
+ (void)killFaceTime;
+ (void)killMediaServerd;
+ (void)syncImagentLogSettings;
+ (void)killImavagent;
+ (void)killImagent;
+ (void)setViceroyLoggingEnabled:(BOOL)arg1;
+ (BOOL)isViceroyLoggingEnabled;

@end

