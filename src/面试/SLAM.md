
- 关于深度估计loss:https://blog.csdn.net/qq_34923437/article/details/109267423
- 这两年论文：https://blog.csdn.net/duanzhaozhao/article/details/112652938?utm_medium=distribute.pc_relevant.none-task-blog-baidujs_title-0&spm=1001.2101.3001.4242

https://blog.csdn.net/qq_22751305/article/details/109990620
- 视觉SLAM14讲对极几何
- 三角化
- 各种矩阵：https://www.cnblogs.com/youzx/p/6385513.html#wiz_toc_0
- [slam14讲笔记](https://www.pianshen.com/article/59411027828/)
- 如何求解线性方程Ax=b？SVD和QR分解哪个更快？
- PnP求解最少需要几个点？（4个，3个求解，1个验证）只有一个点的自由度是多少？两个点呢？
- 病态矩阵
- 旋转矩阵的性质，旋转矩阵的逆、行列式是什么.
- 介绍一下SIFT，SIFT的缺点。ORB。有了匹配关系，怎么配准。单应矩阵的自由度，怎么求解。推导一下最小二乘。讲一下迭代的方法（最速下降法、牛顿法）
- SLAM过程中旋转矩阵解算时的非线性优化问题
- 相机内外参意义，海塞矩阵雅克比矩阵
- LK 光流法
- 四元数
- ransac
- [SIFT](https://blog.csdn.net/qq_37374643/article/details/88606351)

    优点：
    1. 其对旋转、尺度缩放、亮度变化保持不变性
    2. 多量性，即使是很少几个物体也可以产生大量的SIFT特征
    3. 独特性好，信息量丰富

    缺点：
    1. 实时性不高。

    2. 有时特征点较少。


- [ORB](https://zhuanlan.zhihu.com/p/61738607)

    -[Steer BRIEF](https://blog.csdn.net/zhou5513/article/details/108312943)
- nms
- [SIFT + RANSAC](https://blog.csdn.net/masibuaa/article/details/9145441)