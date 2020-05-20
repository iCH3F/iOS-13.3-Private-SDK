//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMActivityObjectID, EMStatusUpdateProvider, NSDate, NSDictionary, NSError, NSProgress, NSString;
@protocol EFCancelable;

@interface EMActivity : NSObject <EFLoggable, NSSecureCoding>
{
//     struct os_unfair_lock_s _lock;
    EMStatusUpdateProvider *_statusUpdateProvider;
    id <EFCancelable> _progressKVOCancellation;
    NSDictionary *_userInfo;
    long long _activityType;
    NSDate *_started;
    NSDate *_finished;
    NSProgress *_progress;
    NSError *_error;
    double _fractionCompleted;
    EMActivityObjectID *_objectID;
}

+ (id)keyPathsForValuesAffectingLocalizedDescription;
+ (BOOL)supportsSecureCoding;
+ (id)log;
@property(readonly) EMActivityObjectID *objectID; // @synthesize objectID=_objectID;
@property(nonatomic) double fractionCompleted; // @synthesize fractionCompleted=_fractionCompleted;
@property(readonly) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property(readonly) NSDate *finished; // @synthesize finished=_finished;
@property(readonly) NSDate *started; // @synthesize started=_started;
@property(readonly) long long activityType; // @synthesize activityType=_activityType;
@property(copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
// - (void).cxx_destruct;
- (id)_localizedDescriptionForFetchState:(long long)arg1;
@property(readonly, copy) NSString *localizedDescription;
@property(readonly, copy) NSString *description;
@property(readonly) BOOL needsPersistentHistory;
- (void)finishWithError:(id)arg1;
- (void)setUserInfoObject:(id)arg1 forKey:(id)arg2;
- (void)setCompletedCount:(long long)arg1 totalCount:(long long)arg2;
- (BOOL)isEqualToActivityWithType:(long long)arg1 userInfo:(id)arg2;
- (void)_observeProgress;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithActivityType:(long long)arg1 userInfo:(id)arg2;

@end

