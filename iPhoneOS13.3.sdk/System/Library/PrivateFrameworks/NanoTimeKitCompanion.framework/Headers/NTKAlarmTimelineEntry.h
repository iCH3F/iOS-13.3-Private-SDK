//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKTimelineEntryModel.h>

@class NSDate, NSString;

@interface NTKAlarmTimelineEntry : NTKTimelineEntryModel
{
    NSUInteger _entryType;
    NSString *_alarmLabel;
    NSDate *_fireDate;
    NSDate *_snoozeDate;
}

+ (id)companionModel;
@property(retain, nonatomic) NSDate *snoozeDate; // @synthesize snoozeDate=_snoozeDate;
@property(retain, nonatomic) NSDate *fireDate; // @synthesize fireDate=_fireDate;
@property(retain, nonatomic) NSString *alarmLabel; // @synthesize alarmLabel=_alarmLabel;
@property(nonatomic) NSUInteger entryType; // @synthesize entryType=_entryType;
// - (void).cxx_destruct;
- (id)description;
- (id)_largeUtilityInactiveImageProvider;
- (id)_extraLargeAlarmInactiveImageProvider;
- (id)_modularSmallAlarmInactiveImageProvider;
- (id)_snoozeStateDateTextProvider;
- (id)_activeStateTimeRelativeDateTextProvider;
- (id)_activeStateTimeTextProvider;
- (id)_newSignatureRectangularTemplate;
- (id)_newSignatureBezelTemplate;
- (id)_newSignatureCircularTemplate;
- (id)_newSignatureCornerTemplate;
- (id)_newExtraLargeTemplate;
- (id)_newLargeUtilityTemplate;
- (id)_newSmallFlatUtilityTemplate;
- (id)_newCircularMediumTemplate;
- (id)_newCircularSmallTemplate;
- (void)_makeAlarmStackTextTimeProvider:(id )arg1 designatorProvider:(id )arg2 designatorExists:(BOOL )arg3 designatorLeads:(BOOL )arg4;
- (id)_circularTemplateForAlarm:(BOOL)arg1;
- (id)_newLargeModularTemplate;
- (id)_newSmallModularTemplate;
- (id)templateForComplicationFamily:(long long)arg1;

@end

