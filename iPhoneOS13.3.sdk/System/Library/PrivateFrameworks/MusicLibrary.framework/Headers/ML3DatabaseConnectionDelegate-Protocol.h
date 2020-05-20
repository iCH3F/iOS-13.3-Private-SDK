//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class ML3DatabaseConnection, NSError;

@protocol ML3DatabaseConnectionDelegate <NSObject>

@optional
- (void)connection:(ML3DatabaseConnection *)arg1 didEndDatabaseTransactionAndCommit:(BOOL)arg2;
- (void)connectionDidBeginDatabaseTransaction:(ML3DatabaseConnection *)arg1;
- (void)connection:(ML3DatabaseConnection *)arg1 didFailToCloseDatabaseWithError:(NSError *)arg2;
- (void)connectionDidCloseDatabase:(ML3DatabaseConnection *)arg1;
- (void)connectionWillCloseDatabase:(ML3DatabaseConnection *)arg1;
- (void)connection:(ML3DatabaseConnection *)arg1 didFailToOpenDatabaseWithError:(NSError *)arg2;
- (void)connectionDidOpenDatabase:(ML3DatabaseConnection *)arg1;
- (void)connectionWillOpenDatabase:(ML3DatabaseConnection *)arg1;
@end

