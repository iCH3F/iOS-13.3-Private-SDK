//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _HDDatabasePendingWriteRecord : NSObject
{
    id /* CDUnknownBlockType */ _writeBlock;
    id /* CDUnknownBlockType */ _completion;
}

@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ completion; // @synthesize completion=_completion;
@property(readonly, copy, nonatomic) id /* CDUnknownBlockType */ writeBlock; // @synthesize writeBlock=_writeBlock;
// - (void).cxx_destruct;
- (id)initWithWriteBlock:(id /* CDUnknownBlockType */)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (id)init;

@end

