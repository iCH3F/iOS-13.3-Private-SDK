//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDEntityEncoder.h>

@interface _HDLocationSeriesSampleEntityEncoder : HDEntityEncoder
{
}

- (BOOL)applyPropertiesToObject:(id)arg1 persistentID:(long long)arg2 row:(struct HDSQLiteRow )arg3 error:(id )arg4;
- (id)objectForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 error:(id )arg3;
- (BOOL)generateCodableRepresentationsForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 maxBytesPerRepresentation:(long long)arg3 error:(id )arg4 handler:(id /* CDUnknownBlockType */)arg5;
- (id)codableRepresentationForPersistentID:(long long)arg1 row:(struct HDSQLiteRow )arg2 error:(id )arg3;
- (id)orderedProperties;

@end

