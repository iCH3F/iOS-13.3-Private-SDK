//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class CNAutocompleteSearchManager, NSNumber, NSString;

@interface CNAutocompleteSearchOperation : NSOperation
{
    CNAutocompleteSearchManager *_owner;
    NSNumber *_taskID;
    NSString *_text;
    NSString *_sendingAddress;
}

+ (id)operationWithOwner:(id)arg1 text:(id)arg2 taskID:(id)arg3;
@property(readonly, nonatomic) NSString *sendingAddress; // @synthesize sendingAddress=_sendingAddress;
@property(readonly, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, nonatomic) NSNumber *taskID; // @synthesize taskID=_taskID;
@property(readonly, nonatomic) CNAutocompleteSearchManager *owner; // @synthesize owner=_owner;
// - (void).cxx_destruct;
@property(readonly, nonatomic) NSUInteger type;

@end

