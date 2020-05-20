//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface AXSSKeyboardCommandCategory : NSObject
{
    NSArray *_commands;
    NSString *_localizedName;
}

+ (id)_gesturesCommandsFromAvailableCommands:(id)arg1;
+ (id)_deviceCommandsFromAvailableCommands:(id)arg1;
+ (id)_navigationCommandsFromAvailableCommands:(id)arg1;
+ (id)_categoryWithCommands:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3;
+ (id)_categoryWithCommandIdentifiers:(id)arg1 availableCommands:(id)arg2 localizedName:(id)arg3;
+ (id)allCategoriesForAvailableCommands:(id)arg1;
@property(readonly, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property(readonly, nonatomic) NSArray *commands; // @synthesize commands=_commands;
// - (void).cxx_destruct;
- (id)initWithCommands:(id)arg1 localizedName:(id)arg2;

@end
