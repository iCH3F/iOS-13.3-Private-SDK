//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TIAssistantSettings : NSObject
{
}

+ (void)launchDictationSettings;
+ (void)launchKeyboardSettings;
+ (void)dismissEnableDataSharingPrompt;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissDialog;
+ (void)dismissedDataSharingWithResponse:(long long)arg1;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* CDUnknownBlockType */)arg1;
+ (void)presentDialogForType:(long long)arg1 withCompletionHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)connectForOperations:(id /* CDUnknownBlockType */)arg1 withErrorHandler:(id /* CDUnknownBlockType */)arg2;
+ (void)setTestBlock:(id /* CDUnknownBlockType */)arg1;

@end

