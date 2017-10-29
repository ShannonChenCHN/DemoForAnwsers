//
//  Mark.h
//  TouchPainter
//
//  Created by ShannonChen on 2017/10/28.
//  Copyright © 2017年 ShannonChen. All rights reserved.
//

#import <UIKit/UIKit.h>

/// 图像绘制的元素
@protocol Mark <NSObject>

@property (nonatomic, strong) UIColor *color;
@property (nonatomic, assign) CGFloat size;
@property (nonatomic, assign) CGPoint location;
@property (nonatomic, assign, readonly) NSUInteger count;
@property (nonatomic, strong, readonly) id <Mark> lastChild;


- (id)copy; // 因为 <NSObject> 协议中没有声明 -copy 方法，所以我们需要在这里提供 -copy 方法，然后让具体的类实现 NSCopying 协议


- (void)addMark:(id <Mark>)mark;
- (void)removeMark:(id <Mark>)mark;
- (id <Mark>)childMarkAtIndex:(NSUInteger)index;

@end
