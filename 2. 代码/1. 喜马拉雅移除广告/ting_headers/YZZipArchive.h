//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface YZZipArchive : NSObject
{
    void *_zipFile;
    void *_unzFile;
    NSString *_password;
    id _delegate;
}

@property(retain, nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)Date1980;
- (_Bool)OverWrite:(id)arg1;
- (void)OutputErrorMessage:(id)arg1;
- (_Bool)UnzipCloseFile;
- (_Bool)UnzipFileTo:(id)arg1 overWrite:(_Bool)arg2;
- (_Bool)UnzipOpenFile:(id)arg1 Password:(id)arg2;
- (_Bool)UnzipOpenFile:(id)arg1;
- (_Bool)CloseZipFile2;
- (_Bool)addFileToZip:(id)arg1 newname:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1 Password:(id)arg2;
- (_Bool)CreateZipFile2:(id)arg1;
- (void)dealloc;
- (id)init;

@end

