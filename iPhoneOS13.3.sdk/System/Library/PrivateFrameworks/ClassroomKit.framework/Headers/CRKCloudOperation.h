//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "CATOperation.h"

@class CKDatabase;

@interface CRKCloudOperation : CATOperation
{
    CKDatabase *_database;
}

+ (id)new;
@property(readonly, nonatomic) CKDatabase *database; // @synthesize database=_database;
// - (void).cxx_destruct;
- (BOOL)isAsynchronous;
- (id)initWithDatabase:(id)arg1;
- (id)init;

@end

