//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKOperationResult, NSDictionary, NSString;

@protocol CKDOperationInfoDelegate <NSObject>
@property(readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
- (void)wasUnexpectedlyUnregisteredForOperationID:(NSString *)arg1;
- (void)operationWithID:(NSString *)arg1 didComplete:(CKOperationResult *)arg2;
- (void)operationWithID:(NSString *)arg1 didProgress:(NSDictionary *)arg2;
@end

