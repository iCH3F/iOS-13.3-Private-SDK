//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class EKCalendarResourceChangeNotification, NSDate, NSDictionary, NSString, NSTimeZone;

@protocol CALNSourceEventRepresentationProvider <NSObject>
- (NSDictionary *)updateEventRepresentationDictionary:(NSDictionary *)arg1 withHypothesisMessage:(NSString *)arg2;
- (NSDictionary *)eventRepresentationDictionaryForResourceChangeNotification:(EKCalendarResourceChangeNotification *)arg1 message:(NSString *)arg2 date:(NSDate *)arg3 endDate:(NSDate *)arg4 timeZone:(NSTimeZone *)arg5;
- (NSDictionary *)eventRepresentationDictionaryForSharedCalendarInvitationNotificationWithTitle:(NSString *)arg1 message:(NSString *)arg2;
- (NSDictionary *)eventRepresentationDictionaryForResponseNotificationWithTitle:(NSString *)arg1 message:(NSString *)arg2;
@end

