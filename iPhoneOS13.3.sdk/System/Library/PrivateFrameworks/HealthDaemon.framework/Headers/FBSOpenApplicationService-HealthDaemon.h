//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FrontBoardServices/FBSOpenApplicationService.h>

@interface FBSOpenApplicationService (HealthDaemon)
+ (BOOL)hd_canOpenApplication:(id)arg1 reason:(long long )arg2;
+ (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
+ (id)hd_defaultService;
- (void)hd_openApplication:(id)arg1 optionsDictionary:(id)arg2 completion:(id /* CDUnknownBlockType */)arg3;
@end

