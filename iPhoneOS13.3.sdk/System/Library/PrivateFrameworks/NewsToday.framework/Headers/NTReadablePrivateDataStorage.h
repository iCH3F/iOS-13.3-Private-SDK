//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsToday/NTReadablePrivateDataStorage-Protocol.h>

@class FCFileCoordinatedTodayDropbox, FCFileCoordinatedTodayPrivateDataTransactionQueue;

@interface NTReadablePrivateDataStorage : NSObject <NTReadablePrivateDataStorage>
{
    FCFileCoordinatedTodayDropbox *_dropbox;
    FCFileCoordinatedTodayPrivateDataTransactionQueue *_transactionQueue;
}

@property(retain, nonatomic) FCFileCoordinatedTodayPrivateDataTransactionQueue *transactionQueue; // @synthesize transactionQueue=_transactionQueue;
@property(retain, nonatomic) FCFileCoordinatedTodayDropbox *dropbox; // @synthesize dropbox=_dropbox;
// - (void).cxx_destruct;
- (void)readPrivateDataWithAccessor:(id /* CDUnknownBlockType */)arg1;
- (id)initWithDropbox:(id)arg1 transactionQueue:(id)arg2;
- (id)init;

@end

