//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString, PSIStatement;

@protocol PSITableDelegate
- (long long)lastInsertedRowID;
- (void)unbindMatchingIds;
- (void)bindMatchingIds:(const long long )arg1 numberOfMatchingIds:(NSUInteger)arg2;
- (void)bindMatchingIds:(const struct __CFArray )arg1 range:(_NSRange)arg2;
- (void)bindMatchingIds:(const struct __CFSet )arg1;
- (void)unprepareMatchingIds;
- (void)prepareForNumberOfMatchingIds:(NSUInteger)arg1;
- (void)executeStatement:(PSIStatement *)arg1 withResultEnumerationBlock:(void (^)(PSIStatement *, BOOL ))arg2;
- (void)executeStatement:(PSIStatement *)arg1;
- (void)executeStatementFromString:(NSString *)arg1 withResultEnumerationBlock:(void (^)(PSIStatement *, BOOL ))arg2;
- (void)executeStatementFromString:(NSString *)arg1;
- (PSIStatement *)statementFromString:(NSString *)arg1;
@end

