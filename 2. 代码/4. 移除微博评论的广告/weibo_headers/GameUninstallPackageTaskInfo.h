//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface GameUninstallPackageTaskInfo : NSObject
{
    NSArray *_list;
    NSString *_userId;
    NSArray *_appIdArrays;
    NSArray *_userTempDirPathArrays;
    NSArray *_userDataDirPathArrays;
}

@property(copy, nonatomic) NSArray *userDataDirPathArrays; // @synthesize userDataDirPathArrays=_userDataDirPathArrays;
@property(copy, nonatomic) NSArray *userTempDirPathArrays; // @synthesize userTempDirPathArrays=_userTempDirPathArrays;
@property(copy, nonatomic) NSArray *appIdArrays; // @synthesize appIdArrays=_appIdArrays;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSArray *list; // @synthesize list=_list;
- (void).cxx_destruct;

@end

