//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface Main : NSObject
{
    NSString *_path;
    NSString *_fileName;
    void _zip;
}

+ (id)dateWithMicrosoftDOSFormat:(unsigned int)arg1;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2 keepParentDirectory:(BOOL)arg3;
+ (BOOL)createZipFileAtPath:(id)arg1 withContentsOfDirectory:(id)arg2;
+ (BOOL)createZipFileAtPath:(id)arg1 withFilesAtPaths:(id)arg2;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id )arg5 delegate:(id)arg6 progressHandler:(id /* CDUnknownBlockType */)arg7 completionHandler:(id /* CDUnknownBlockType */)arg8;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 progressHandler:(id /* CDUnknownBlockType */)arg3 completionHandler:(id /* CDUnknownBlockType */)arg4;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 progressHandler:(id /* CDUnknownBlockType */)arg5 completionHandler:(id /* CDUnknownBlockType */)arg6;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id )arg5 delegate:(id)arg6;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 delegate:(id)arg3;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2 overwrite:(BOOL)arg3 password:(id)arg4 error:(id )arg5;
+ (BOOL)unzipFileAtPath:(id)arg1 toDestination:(id)arg2;
// - (void).cxx_destruct;
@property(readonly, nonatomic) BOOL close;
- (BOOL)writeData:(id)arg1 fileName:(id)arg2;
- (BOOL)writeFileAtPath:(id)arg1 withFileName:(id)arg2;
- (BOOL)writeFile:(id)arg1;
- (BOOL)writeFolderAtPath:(id)arg1 withFolderName:(id)arg2;
- (void)zipInformation:(CDStruct_192a48cb )arg1 setDate:(id)arg2;
@property(readonly, nonatomic) BOOL open;
- (id)initWithPath:(id)arg1;

@end

