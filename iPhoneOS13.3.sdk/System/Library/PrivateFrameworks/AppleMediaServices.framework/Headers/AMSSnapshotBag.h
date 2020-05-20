//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagProtocol-Protocol.h>

@class AMSBagFrozenDataSource, NSDate, NSString;

@interface AMSSnapshotBag : NSObject <AMSBagProtocol>
{
    NSDate *_creationDate;
    AMSBagFrozenDataSource *_dataSource;
}

@property(retain, nonatomic) AMSBagFrozenDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
// - (void).cxx_destruct;
- (id)dictionaryForKey:(id)arg1;
- (id)URLForKey:(id)arg1;
- (id)stringForKey:(id)arg1;
- (id)integerForKey:(id)arg1;
- (id)doubleForKey:(id)arg1;
- (void)createSnapshotWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (id)boolForKey:(id)arg1;
- (id)arrayForKey:(id)arg1;
- (BOOL)isLoaded;
@property(readonly, copy, nonatomic) NSString *profileVersion;
@property(readonly, copy, nonatomic) NSString *profile;
@property(readonly, nonatomic, getter=isExpired) BOOL expired;
@property(readonly, nonatomic) NSDate *expirationDate;
- (id)initWithDataSource:(id)arg1;

@end

