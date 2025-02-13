//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileHandle, NSURL;

@interface CLSEventLogFile : NSObject
{
    NSURL *_fileURL;
    unsigned long long _fileSize;
    NSFileHandle *_fileHandle;
}

@property(readonly, nonatomic) unsigned long long fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
- (id)readFromFile:(id *)arg1;
- (_Bool)resetFile:(id *)arg1;
- (_Bool)appendData:(id)arg1 error:(id *)arg2;
- (void)closeFileHandle;
- (_Bool)openFileHandleForReading:(id *)arg1;
- (_Bool)openFileHandleForWriting:(id *)arg1;
- (id)init;
- (id)initWithName:(id)arg1 inDirectoryWithURL:(id)arg2;
- (id)initWithURL:(id)arg1;
- (void)dealloc;

@end

