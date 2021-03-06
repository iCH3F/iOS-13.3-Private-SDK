//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/MTLModel.h>

#import <ActionKit/MTLJSONSerializing-Protocol.h>

@class NSDate;

@interface WFWunderlistReminder : MTLModel <MTLJSONSerializing>
{
    long long _reminderId;
    NSDate *_date;
    NSDate *_createdAt;
    NSDate *_updatedAt;
    long long _revision;
}

+ (id)updatedAtJSONTransformer;
+ (id)createdAtJSONTransformer;
+ (id)dateJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(readonly, nonatomic) long long revision; // @synthesize revision=_revision;
@property(readonly, nonatomic) NSDate *updatedAt; // @synthesize updatedAt=_updatedAt;
@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property(readonly, nonatomic) long long reminderId; // @synthesize reminderId=_reminderId;
// - (void).cxx_destruct;

@end

