//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMSearchFilterCateogryModel : NSObject
{
    _Bool _selected;
    NSString *_imageName;
    NSString *_categoryName;
    NSString *_categoryId;
    long long _count;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long count; // @synthesize count=_count;
@property(copy, nonatomic) NSString *categoryId; // @synthesize categoryId=_categoryId;
@property(copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
@property(copy, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
- (void).cxx_destruct;

@end

