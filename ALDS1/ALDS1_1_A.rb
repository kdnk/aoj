def intersection_sort(arr, n)
  for i in 1..(n-1)
    v = arr[i]
    j = i-1
    while j >= 0 and arr[j] > v
      arr[j+1] = arr[j]
      j = j - 1
    end
    arr[j+1] = v
    puts arr.join(' ')
  end
end

n = gets.chomp.to_i
arr = gets.chomp.split(' ').map(&:to_i).shift(n)
puts arr.join(' ')

intersection_sort(arr, n)
