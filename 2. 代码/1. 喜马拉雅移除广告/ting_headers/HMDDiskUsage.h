//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSMutableArray, NSMutableDictionary;

@interface HMDDiskUsage : NSObject
{
    _Bool _checkSparseFile;
    NSMutableDictionary *_outDatedfilesDictionary;
    NSMutableArray *_allFileList;
    NSMutableArray *_abnormalFolders;
    long long _appSpace;
    long long _abnormalFolderSize;
    long long _abnormalFolderFileNumber;
    double _outdatedDays;
    double _sparseFileLeastDifferPercentage;
    unsigned long long _sparseFileLeastDifferSize;
    NSArray *_ignoredRelativePathes;
    NSHashTable *_visitors;
}

+ (unsigned long long)folderSizeAtPath:(id)arg1;
+ (double)getFreeDiskSpace;
+ (double)getTotalDiskSpace;
@property(retain, nonatomic) NSHashTable *visitors; // @synthesize visitors=_visitors;
@property(retain) NSArray *ignoredRelativePathes; // @synthesize ignoredRelativePathes=_ignoredRelativePathes;
@property(nonatomic) _Bool checkSparseFile; // @synthesize checkSparseFile=_checkSparseFile;
@property(nonatomic) unsigned long long sparseFileLeastDifferSize; // @synthesize sparseFileLeastDifferSize=_sparseFileLeastDifferSize;
@property(nonatomic) double sparseFileLeastDifferPercentage; // @synthesize sparseFileLeastDifferPercentage=_sparseFileLeastDifferPercentage;
@property(nonatomic) double outdatedDays; // @synthesize outdatedDays=_outdatedDays;
@property(nonatomic) long long abnormalFolderFileNumber; // @synthesize abnormalFolderFileNumber=_abnormalFolderFileNumber;
@property(nonatomic) long long abnormalFolderSize; // @synthesize abnormalFolderSize=_abnormalFolderSize;
@property(nonatomic) long long appSpace; // @synthesize appSpace=_appSpace;
@property(retain, nonatomic) NSMutableArray *abnormalFolders; // @synthesize abnormalFolders=_abnormalFolders;
@property(retain, nonatomic) NSMutableArray *allFileList; // @synthesize allFileList=_allFileList;
@property(retain, nonatomic) NSMutableDictionary *outDatedfilesDictionary; // @synthesize outDatedfilesDictionary=_outDatedfilesDictionary;
- (void).cxx_destruct;
- (id)getFileAccessLastDateAtPath:(id)arg1;
- (id)translateRelativePathToAbsolute:(id)arg1;
- (id)translateAbsolutePathToRelative:(id)arg1;
- (void)purifyAndStoreTheIgnorePathes:(id)arg1;
- (id)getOutDateFiles;
- (id)calculateOutDateFilesAtPath:(const char *)arg1 fileSize:(long long)arg2 isOutdated:(_Bool *)arg3 fileCount:(long long)arg4;
- (id)getAppFileListForTopRank:(unsigned long long)arg1;
- (id)getFileListsAtPath:(id)arg1 forTopRank:(unsigned long long)arg2;
- (void)calculateTopFiles:(id)arg1 fileSize:(long long)arg2;
- (id)getExceptionFolders;
- (void)calculateExceptionFilesAtFolderPath:(const char *)arg1 folderSize:(long long)arg2 isAbnormal:(_Bool *)arg3 fileCount:(unsigned long long *)arg4;
- (long long)recursiveCalculateAtPath:(const char *)arg1 isAbnormal:(_Bool *)arg2 isOutdated:(_Bool *)arg3 needCheckIgnorePath:(_Bool)arg4;
- (unsigned long long)folderSizeAtPath:(id)arg1 isAbnormal:(_Bool *)arg2 isOutdated:(_Bool *)arg3;
- (unsigned long long)fileSizeAtPath:(id)arg1;
- (double)getThisAppSpace;
- (id)init;
- (id)initWithOutdatedDays:(double)arg1 abnormalFolderSize:(long long)arg2 abnormalFolderFileNumber:(long long)arg3 ignoreRelativePathes:(id)arg4 checkSparseFile:(_Bool)arg5 sparseFileLeastDifferPercentage:(double)arg6 sparseFileLeastDifferSize:(unsigned long long)arg7;
- (id)initWithOutdatedDays:(double)arg1 abnormalFolderSize:(long long)arg2 abnormalFolderFileNumber:(long long)arg3 ignoreRelativePathes:(id)arg4 checkSparseFile:(_Bool)arg5 sparseFileLeastDifferPercentage:(double)arg6 sparseFileLeastDifferSize:(unsigned long long)arg7 visitors:(id)arg8;

@end

